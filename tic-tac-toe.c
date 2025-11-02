#include <stdio.h>
#include<stdlib.h>
int main(){ 
printf("this is a tic tac toe game\n");      //we tell the rules and provide some info about how game works
printf("here are the rules\n");
printf("u have to enter the position as 11, 12, 13 same as matrix indexing\n");   
printf("if u give a single invalid position input the program will end and start from starting\n");
printf("your entery is highlighted AS 1 and the computer enter as 0 and (*) means empty position\n"); 
int i, j, k, n;
int board[3][3];
for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){         //assigning all positions as empty 
        board[i][j]='*';
    }
}
printf("|00|01|02|\n");
printf("|10|11|12|\n");
printf("|20|21|22|\n");
printf("here is the position matrix, u have to assign the positions accordingly this indexing\n");
printf("now enter the position for ur first move\n");    //taking input from the user
scanf("%d", &n);
i = n/10;     //taking input in a single number and then seprate them using '/' and '%' op 
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   //checking for invalid input
    printf("invalid position input, program ended\n"); 
    exit(0);      //if user gives invalid input program will end  
      }
    else
board[i][j] = '1';    //assigning user input to the position entered by the user if its valid 

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 1 move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the move by computer\n");
 //here i use loop and if else ladder to make a algo of computer to make its move its check 3 condions in every row and colomn until it played its move and after playing it breaks the loop #1 first priority is 11 posotion after the horizontal and vertical rows and then if none of the horizontal and vertical rows satisfies the condition it plays at the first empty position it finds
int played = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';               
    played = 1;
}
if(!played){
    for(i=0;i<3 && !played;i++){
        for(j=0;j<3 && !played;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played=1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played=1;}
         
            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played= 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played= 1;}



        }
    }
}
if(!played){
    for(i=0;i<3 && !played;i++){
        for(j=0;j<3 &&!played;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 1 move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("play your second move\n");    //taking 2nd input from the user
scanf("%d", &n);
   i = n/10;    
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   
    printf("invalid position input, program ended\n"); 
    exit(0);     
      }
    else
board[i][j] = '1';   

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 2nd move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the second move by computer\n");
int played2 = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';
    played2 = 1;
}
if(!played2){
    for(i=0;i<3 && !played2;i++){
        for(j=0;j<3 && !played2;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played2=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played2=1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played2=1;}

            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played2= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played= 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played2= 1;}



        }
    }
}
if(!played2){
    for(i=0;i<3 && !played2;i++){
        for(j=0;j<3 &&!played2;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played2 = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 2 move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("play your 3rd move\n");    //taking 3rd input from the user
scanf("%d", &n);
       i = n/10;    
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   
    printf("invalid position input, program ended\n"); 
    exit(0);     
      }
    else
board[i][j] = '1'; 

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 3rd move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the second move by computer\n");
int played3 = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';
    played3 = 1;
}
if(!played3){
    for(i=0;i<3 && !played3;i++){
        for(j=0;j<3 && !played3;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played3=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played3=1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played3=1;}

            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played3= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played3= 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played3= 1;}



        }
    }
}
if(!played3){
    for(i=0;i<3 && !played3;i++){
        for(j=0;j<3 &&!played3;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played3 = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 3 move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("play your 4th move\n");    //taking 4th input from the user
scanf("%d", &n);
i = n/10;    
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   
    printf("invalid position input, program ended\n"); 
    exit(0);     
      }
    else
board[i][j] = '1'; 

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 4th move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the 4th move by computer\n");
int played4 = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';
    played4 = 1;
}
if(!played4){
    for(i=0;i<3 && !played4;i++){
        for(j=0;j<3 && !played4;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played4=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played4 =1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played4=1;}

            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played4= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played4= 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played4= 1;}



        }
    }
}
if(!played4){
    for(i=0;i<3 && !played4;i++){
        for(j=0;j<3 &&!played4;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played4 = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 4 move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("play your 5th move\n");    //taking 5th input from the user
scanf("%d", &n);
     i = n/10;    
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   
    printf("invalid position input, program ended\n"); 
    exit(0);     
      }
    else
board[i][j] = '1'; 

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 5 move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the 5th move by computer\n");
int played5 = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';
    played5 = 1;
}
if(!played5){
    for(i=0;i<3 && !played5;i++){
        for(j=0;j<3 && !played5;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played5=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played5=1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played5=1;}

            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played5= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played5= 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played5= 1;}



        }
    }
}
if(!played5){
    for(i=0;i<3 && !played5;i++){
        for(j=0;j<3 &&!played5;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played5 = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 6th move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("play your 6th move\n");    //taking 6th input from the user
scanf("%d", &n);
i = n/10;    
j = n%10;
if(i>3 || j>3 || i<0 || j<0){   
    printf("invalid position input, program ended\n"); 
    exit(0);     
      }
    else
board[i][j] = '1'; 

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 6th move by user
        printf("%c",board[i][j]);
    }
    printf("\n");

}
printf("here is the 6th move by computer\n");
int played6 = 0;
if (board[1][1] == '*') {
    board[1][1] = '0';
    played6 = 1;
}
if(!played6){
    for(i=0;i<3 && !played6;i++){
        for(j=0;j<3 && !played6;j++){
            if(board[i][0]=='1' && board[i][1]=='1' && board[i][2] == '*') {board[i][2]='0';
            played6=1;}
            else if
            (board[i][0]=='1' && board[i][1]=='*' && board[i][2]=='1'){board[i][1]='0';
            played6=1;}
            else if 
            (board[i][0]=='*' && board[i][1]=='1' && board[i][2]=='1'){board[i][0]='0'; played6=1;}

            else if 
            (board[0][j]=='1' && board[1][j]=='1' && board[2][j]=='*'){board[2][j]='0'; played6= 1;}
            else if 
            (board[0][j]=='*' && board[1][j]=='1' && board[2][j]=='1'){board[0][j]='0'; played6 = 1;}
            else if 
            (board[0][j]=='1' && board[1][j]=='*' && board[2][j]=='1'){board[1][j]='0'; played6= 1;}



        }
    }
}
if(!played6){
    for(i=0;i<3 && !played6;i++){
        for(j=0;j<3 &&!played6;j++){
            if(board[i][j]=='*'){
                board[i][j]='0';
                played6 = 1;
            }
        }
    }
}

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 6th move by computer
        printf("%c",board[i][j]);
    }
    printf("\n");

}

return 0;
}