
void Heapify(int arr[],int size){
    //keep checking if the parant bigger than his children
    // if yes ,swap them.
    //the checking start from most right node have child
    int index = size/2-1;
    while(index > -1 ){
        if( index*2+1 >= size || index*2+2 >=size)
        { index--;
            continue;
        }else if(arr[index] > arr[index*2+1]){
           std::swap(arr[index],arr[index*2+1]);
            index = index*2+1;
            continue;}
        else if(arr[index] > arr[index*2+2] ){
           std::swap(arr[index],arr[index*2+2]);
            index = index*2+2;
            continue;  }
        index--;
    }
    }
