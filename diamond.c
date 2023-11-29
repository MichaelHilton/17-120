#include <assert.h>
#include <stdio.h>
#include <string.h>


char* append_spaces(char* s, int num_spaces){
    for(int i=0; i<num_spaces;i++){
        strcat(s, " ");
        //printf("middle_row: %s\n",middle_row);
        // strcat(middle_row, {' '});
    }
    return s;
}

const char* top_pyramid(char* top_pyramid, char c){
    char str_c[2] = {c , '\0'};
    int num_rows = c -'A';
    printf("num_rows: %i\n",num_rows);
    top_pyramid = append_spaces(top_pyramid,num_rows);
    strcat(top_pyramid,"A");
    top_pyramid = append_spaces(top_pyramid,num_rows);
    strcat(top_pyramid,"\n");
    printf("top_pyramid:**%s**\n",top_pyramid);
    for(int i = 1; i<num_rows;i++){
        int num_spaces = num_rows-i;
        printf("num_spaces: %i\n",num_spaces);
        top_pyramid = append_spaces(top_pyramid,num_spaces);
        char str_curr_letter[2] = {'A'+i , '\0'};
        strcat(top_pyramid,str_curr_letter);
        top_pyramid = append_spaces(top_pyramid,i);
        strcat(top_pyramid,str_curr_letter);
        top_pyramid = append_spaces(top_pyramid,num_spaces);
        strcat(top_pyramid,"\n");
    }
    printf("top_pyramid:**\n%s\n**\n",top_pyramid);
    return top_pyramid;
}

const char* middle_row(char* middle_row, char c){
    printf("char: %c\n",c);
    char str_c[2] = {c , '\0'};
    printf("str_c: %s\n",str_c);
    int distance_from_A = c-'A';
    printf("distance_from_A: %d\n",distance_from_A);
    strcat(middle_row,str_c);
    // for(int i=1; i<(2*distance_from_A);i++){
    //     strcat(middle_row, " ");
    //     printf("middle_row: %s\n",middle_row);
    //     // strcat(middle_row, {' '});
    // }
    middle_row = append_spaces(middle_row,(2*distance_from_A-1));
    printf("middle_row: %s\n",middle_row);
    strcat(middle_row,str_c);
    strcat(middle_row,"\n");
    // middle_row[(2*distance_from_A)+2]='\0';
    printf("middleRow: **%s**\n",middle_row);
    return middle_row;
}


int main () {
    char solution[10000] = "";



    printf("%s\n",  middle_row(solution, 'B'));
    
    char B_middle_row[20] = "";
    assert(strcmp(middle_row(B_middle_row, 'B'),"B B\n")==0);

    char C_middle_row[20] = "";
    assert(strcmp(middle_row(C_middle_row, 'C'),"C   C\n")==0);

    char D_middle_row[20] = "";
    assert(strcmp(middle_row(D_middle_row, 'D'),"D     D\n")==0);

    //__A__
    //_B_B_
    char C_top_pyramid[100]="";
    assert(strcmp(top_pyramid(C_top_pyramid, 'C'),"  A  \n B B \n")==0);

    return(0);
}