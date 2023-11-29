#include <assert.h>
#include <stdio.h>
#include <string.h>

//strcat(s1, s2): concatenates two strings

// const char* top_of_diamond(char c, int total_len){
//     char row[] = "";
//     if(c == 'A'){
//         for(int i = 0; i<total_len/2;i++){
//             strcat(row," ");
//         }
//         strcat(row,"A");
//         for(int i = 0; i<total_len/2;i++){
//             strcat(row," ");
//         }
//         return row;
//     }
//     else{
//         for(int i = 0; i<total_len/2;i++){
//             strcat(row," ");
//         }
//         strcat(row,C);
//         for(int i = 0; i<total_len/2;i++){
//             strcat(row," ");
//         }
//     }
// }
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

const char* Diamond(char c, char* solution) {

    char max = c;
    int size = max - 'A';
    int col,row;
    for(row = 0; row<size*2+1; row++) {
        for(col = 0; col<size*2+1; col++) {
            int letter = row < size ? row : size*2 - row;
            putchar(col-size == letter || size-col == letter ? 'A'+letter : ' ');
        }
        char eol[2];
            eol[0] = '\n';
            eol[1] = '\0';
            strcat(solution,eol);
    }
    return solution;

//     char row[1000] = "";

//     if(c == 'A'){
//         return "A";
//     }
        
//     //example
// // char character;//to be scanned
// // char merge[2];// this is just temporary array to merge with      
// // merge[0] = character;
// // merge[1] = '\0';
// //now you have changed it into a string
        
//     else{
//         int dist_to_a = (c- 'A');
//         int width = ((c- 'A')*2)-1;
//         printf("width: %d:\n",width);
//         printf("dist_to_a: %d:\n",dist_to_a);

//         for(int i=0; i<(((c- 'A')*2)-1);i++){
//             // strcat(row," ");
        
//             char space[2];
//             space[0] = ' ';
//             space[1] = '\0';
//             strcat(row,space);
//         }

        
//         printf("TEST");
//         char letter[2];
//         letter[0] = c;
//         letter[1] = '\0';
       
       
        

//         // printf("width: %d:\n",(c- 'A'));
        
//         // printf("width: %d:\n",(c- 'A')*2);
//         // printf("width: %d:\n",(((c- 'A')*2)-1));
//         for(int i=0; i<(((c- 'A')*2)-1);i++){
//             // strcat(row," ");
        
//             char space[2];
//             space[0] = ' ';
//             space[1] = '\0';
//             strcat(row,space);
//         }
//         strcat(row,letter);
//         strcat(row,"\n");
//         //return row;
//     }
//     // if(c == 'B'){
//     //     return " A \nB B\n A \n";
//     // }
//     // if(c == 'C'){
//     //     return "  A  \n B B \nC   C\n B B \n  A  \n";
//     // }

//   return "---";
}

int main () {
        char solution[10000] = "";
//   char str1[] = "A";
//   // comparing strings str1 and str2
//   int result;
//   printf("strcmp(str1, str2) = %s\n", Diamond('A'));
//   result = strcmp(Diamond('A'), str1);
//   printf("strcmp(str1, str2) = %d\n", result);

//   int r2 = strcmp("A","A");
//   printf("strcmp(A, A) = %d\n", r2);

//   int r3 = strcmp("A","B");
//   printf("strcmp(A, B) = %d\n", r3);

//   printf("%d\n",('C'-'A'));
//   printf("%d\n",('D'-'A'));


    // printf("%s\n",  middle_row(solution, 'B'));
    
    // char B_middle_row[20] = "";
    // assert(strcmp(middle_row(B_middle_row, 'B'),"B B\n")==0);

    // char C_middle_row[20] = "";
    // assert(strcmp(middle_row(C_middle_row, 'C'),"C   C\n")==0);

    // char D_middle_row[20] = "";
    // assert(strcmp(middle_row(D_middle_row, 'D'),"D     D\n")==0);

    //__A__
    //_B_B_
    char C_top_pyramid[100]="";
    assert(strcmp(top_pyramid(C_top_pyramid, 'C'),"  A  \n B B \n")==0);


//   printf("%s\n", Diamond('A'));
//   assert(strcmp(Diamond('A'),"A")==0);
//    printf("%s\n", Diamond('C',solution));
//   assert(strcmp(Diamond('B')," A \nB B\n A \n")==0);
//   printf("%s\n", Diamond('C'));
//   assert(strcmp(Diamond('C'),"  A  \n B B \nC   C\n B B \n  A  \n")==0);
  return(0);
}