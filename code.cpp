int arrayMode(std::vector<int> sequence) {
    int count = 0;
    int temp = 0;
    int index = 0;

    for(int i=0; i<sequence.size()-1; i++) {
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
