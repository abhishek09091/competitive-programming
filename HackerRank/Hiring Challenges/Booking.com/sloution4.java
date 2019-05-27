static List<Integer> sort_hotels(String keywords, List<Integer> hotel_ids, List<String> reviews) {

        String[] str_arr = keywords.split("\\s");
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < reviews.size(); i++) {
            String temp = reviews.get(i);
            temp = temp.toLowerCase();
            int count = 0;
            for (int j = 0; j < str_arr.length; j++) {
                Pattern p = Pattern.compile(str_arr[j]);
                Matcher match = p.matcher(temp);
                while (match.find()) {
                    count++;
                }
            }

            if (map.containsKey(hotel_ids.get(i))) {
                map.put(hotel_ids.get(i), map.get(hotel_ids.get(i)) + count);
            } else {
                map.put(hotel_ids.get(i), count);
            }
        }

        Map<Integer, Integer> reverseSortedMap = new TreeMap<Integer, Integer>(Collections.reverseOrder());
        reverseSortedMap.putAll(map);

        List<Integer> result = new ArrayList<>();
        for (Integer id : reverseSortedMap.keySet()){

            result.add(id);
        }
}