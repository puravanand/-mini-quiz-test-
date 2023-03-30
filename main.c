#include <stdio.h>
int main(){
int i,a,b,c,point=0;

  char name[20];
  printf("\n \t \t \t \t \t \t QUIZ GAME \n");
  printf("Enter the no. \n");
  printf("\t \t \t \t \tPress 1 for start the Quiz : \n \t \t \t \t \tPress 0 for exit the Quiz: \n");
  scanf("%d",&i);


switch(i){
  case 1:
  printf("Register your Name  ");
    scanf("%s",&name);
    printf("\n Welcome  in the Quiz %s \n",name);
    printf("This Quiz contain 5 Question \n Each correct answer provide 5 marks each \n Each incorrect answer deduct -1 marks each \t\ TOTAL MARKS = 15");
    printf("\n{Select one option which is correct}");
    printf("\n  Q1.) How many days in a month of january?");
    printf("\n1.)30days \t \t 2.)31 days\n");
    scanf("\n%d",&a);
    if(a==2){
      printf(" this is correct");
      point = point+5;

    }
    else{
      point = point -1;


    }

  printf("\n \n Q2.)  How many second in one min.");
    printf("\n1.)60min. \t \t 2.)61 min.\n");
      scanf("\n %d",&b);
    if( b==1){
      printf("this is correct");
      point = point+5;

    }
    else{
      point = point -1;
      printf(" this is incorrect answer \n -1 marks will be deducted");
    }
    printf("\n \n  what is the valid age for driving");
    printf("\n 1.)17 \t \t \t \t 2.) 18\n");
    scanf("\n%d",&c);
    if(c==2){
      printf("\nGREAT");
      printf("\nthis is correct");
            point = point+5;

    }
    else{
      point = point -1;
      printf(" this is incorrect answer \n -1 marks will be deducted");
    }
    printf("\n your Total score is %d out of 15",point);
    printf("\n Congratulations");

  break;

  case 0:
  printf(" Exited");
  break;

  default:
  printf("Invalid no.");
}









  return 0;

}
