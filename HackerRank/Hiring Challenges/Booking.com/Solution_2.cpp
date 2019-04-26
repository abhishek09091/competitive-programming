vector<int> delta_encode(vector<int> numbers) {

  vector<int> result;
  result.push_back(numbers[0]);
  for (int i = 1; i < numbers.size(); i++) {

    int previous = numbers[i - 1];
    int present = numbers[i];
    int diff = present - previous;
    if (diff <= -127 || diff >= 127) {
      result.push_back(-128);
      result.push_back(diff);
    } else {
      result.push_back(diff);
    }
  }

  return result;
}