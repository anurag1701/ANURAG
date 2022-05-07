/* electricity bill generator*/
#include <stdio.h>
int main()
{
  float unit, total, charge;
  char name[20];
  printf("enter the name:");// accept consumer name
  gets(name);
  printf("enter the units:");// accept no.of unit consumed
  scanf("%f",&unit);
  charge=0;
  if(unit>=1 && unit<=200)
  {
    charge=0.8*unit;//80 paise per first 200 units
  }
  else if (unit>=201 && unit<=300)
  {
    charge=0.8*(200)+0.9*(unit-200);
  }
  else if(unit>300)
  {
    charge=0.8*(200)+0.9*(100)+1*(unit-300);
  }
  total=charge+100;// add meter charge of rs 100
  if (total>400)
  {
    total=total+(0.15*total);// additional charge 
  }
  // display electricity bill
  printf("\n\n Electricity bill\n");
  printf("\nname:%s\n",name);
  printf("no. of units:%2f\n",unit);
  printf("total bill amount: rs %2f\n",total);
  printf("......\n");
  return 0;
}