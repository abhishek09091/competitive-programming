package com.aws.lambda.memory.effect;

import com.amazonaws.services.lambda.runtime.Context;
import java.util.Date;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;
import com.amazonaws.services.lambda.runtime.RequestStreamHandler;

import java.io.*;

public class LambdaMethodHandler implements RequestStreamHandler{

    /**
     * Timestamp intialization
     *
     **/
    static Date date;
    static long timestamp;

    static{
        date = new Date();
        timestamp = date.getTime();
    }


    public void handleRequest(InputStream inputStream, OutputStream outputStream, Context context) throws IOException {
        int vCPU = Runtime.getRuntime().availableProcessors();
        JSONParser jsonParser = new JSONParser();
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        JSONObject responseJson = new JSONObject();
        String item = null;
        try {
            JSONObject event = (JSONObject) jsonParser.parse(bufferedReader);
            JSONObject responseBody = new JSONObject();
            if (event.get("pathParameters") != null) {
                JSONObject pathParameter = (JSONObject) event.get("pathParameters");
                if (pathParameter.get("message") != null) {
                    String message = (String) pathParameter.get("message");
                    item = message + " Number of vCPU  - " + vCPU + " " + LambdaMethodHandler.timestamp;
                }
            }
            if (item != null) {
                responseBody.put("message", item);
                responseBody.put("statusCode", 200);
            } else {
                responseBody.put("message", "No content found");
                responseBody.put("statusCode", 404);
            }
            JSONObject headerJson = new JSONObject();
            headerJson.put("x-custom-header", "my custom header value");
            responseJson.put("statusCode", 200);
            responseJson.put("headers", headerJson);
            responseJson.put("body", responseBody.toString());
        } catch (ParseException pex) {
            responseJson.put("statusCode", 400);
            responseJson.put("message", pex.toString());
        }
        OutputStreamWriter writer = new OutputStreamWriter(outputStream, "UTF-8");
        writer.write(responseJson.toString());
        writer.close();

    }
}
