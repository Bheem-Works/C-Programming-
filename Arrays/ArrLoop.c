    // let's loop through from this. 
    # include <stdio.h> 
    int main() {
        int Arr [] = {1,2,3,4,5};
        int length = sizeof(Arr) / sizeof(Arr[0]);

        for(int i = 0; i < length ; i++) {
            int array = Arr[i];
            printf("%d ",array);
        }
        return 0;        
    }