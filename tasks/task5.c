#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc<2){
        printf("Error: No words to count.\n");
        return 1;
    }

    char *words[100];
    int counts[100];
    for (int i=0;i<100;i++){
        counts[i] = 0;
    }
    int word_count=0;

    for(int i=1;i<argc;i++){
        int found=0;
        for(int j=0;j<word_count;j++){
            if(strcmp(argv[i], words[j])==0){
                counts[j]++;
                found=1;
                break;
            }
        }
        if(!found){
            words[word_count]=argv[i];
            counts[word_count]++;
            word_count++;
        }
    }

    for(int i=0;i<word_count;i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }

    return 0;
}