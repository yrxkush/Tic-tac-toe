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
for(i=0;i<3;i++){
    for(j=0;j<3;j++){     // print a sample matrix with empty positions 
        printf("%c",board[i][j]);
    }
printf("\n");
}
printf("here is the sample matrix\n");    
printf("now enter the position where u want to start the game\n");
printf("enter the position\n");    //taking input from the user
scanf("%d", &n);
    if(n==11)      //finding the position of matrix acc to the standard 2d array indexing and saving that input as 1 at that position
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';                //finding the position of matrix acc to the standard 2d array indexing and saving that input  as 1 at that position   
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

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
    if(n==11)   
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';               
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 2 move by user
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
printf("play your 3rd move\n");    //taking 3nd input from the user
scanf("%d", &n);
    if(n==11)   
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';               
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 3 move by user
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
    if(n==11)   
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';               
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

for(i=0;i<3;i++){
   for(j=0;j<3;j++){     // print matirx after 4 move by user
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
    if(n==11)   
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';               
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

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
    if(n==11)   
    board[0][0]='1';  
    else if(n==12)
    board[0][1]='1';
    else if (n==13)
    board[0][2]='1';               
    else if (n==21)
    board[1][0]='1';
    else if (n==22)
    board[1][1]='1';
    else if (n==23)
    board[1][2]='1';
    else if (n==31)
    board[2][0]='1';
    else if (n==32)
    board[2][1]='1';
    else if (n==33)
    board[2][2]='1';
    else{
        printf("invalid position input, program ended\n"); 
        exit(0);      //if user gives invalid input program will end  
      }

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