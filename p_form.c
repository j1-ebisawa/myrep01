#include <stdio.h>
#include <string.h>
   void myprint(void);
   int  check_type = 0;
   int   a;
   float f;
   char  c;
   char s[50];
   char p_form[20];
      
int main(void) {

   while(check_type != 5) {
      printf ("Select data-type 1:int 2:float 3:char 4:char[] 5:end->");
      scanf  ("%d", &check_type);
      switch (check_type) {
      case 1:
         printf("Input int a=");
         scanf ("%d", &a);
         myprint();
         break;
      case 2:
         printf("Input float f=");
         scanf ("%f", &f);
         myprint();
         break;
      case 3:
         printf("Input char c=");
         scanf (" %c", &c);
         myprint();
         break;
      case 4:
         printf("Input char[] s=");
         scanf ("%s", &s);
         myprint();
         break;
      default:
         break;
      }
   }
   return 0;
}
void myprint(void) { 
         p_form[0] = '\0';
         while (strcmp(p_form, "end")!=0) {
            printf ("Input P_form=");
            scanf  ("%s", &p_form); 
            if (strcmp(p_form, "end")==0)
               break;
            switch(check_type) {
               case 1: printf(p_form, a);
                       break;
               case 2: printf(p_form, f); 
                       break;
               case 3: printf(p_form, c);
                       break;
               case 4: printf(p_form, s);
                      break;
            }
            printf ("\n");
          }
      }
