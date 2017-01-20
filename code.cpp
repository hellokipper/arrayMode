int arrayMode(std::vector<int> sequence) {
    int count = 0;
    int temp = 0;
    int index = 0;

    int size = (sequence.size() >> 1) + 1;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<sequence.size(); j++) {
            if(sequence[i] == sequence[j]) {
                count++;
            }
        }
        if(count > temp) {
            temp = count;
            index = i;
        }
        count = 0;
    }
    return sequence[index];
}
