#include <stdio.h>
#include <stdio.h>

int main(){
    printf("Thanks for using C-LIVE the interactive c-live reloader. We support all native <b>html tags</b> and uses the react native css to make sure everyone is comfortable with the style of the website\n");
    printf("\n");
    printf("To check run program simple install with <p style='color:green'> $ npm install </p> then simple run by  running <p style='color:green'>$ npm start </p>");

    char c;
    while(c!='\n'){
      c = getc(stdin);
      printf("%c", c);

    }


    printf("<mark>Happy hacking!</mark>");
    
  return 0;
}