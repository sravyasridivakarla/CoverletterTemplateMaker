//Sravya Divakarla's Parody of a coverletter in C (for fun purposes only)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  const char role_title[] = "Software Engineering, Intern Position";
  const char company[] = "Software Company";
  const char *personal_characteristics[3] = {"Creative","Innovative","Techy"};
  const char value_statement[] = "works hard to solve each problem given to me with efficiency, elegance and enthusiastically.";
  char *content;

  content = (char*)malloc(sizeof(char)*(strlen(role_title) + strlen(company) + strlen(personal_characteristics[0]) +
  strlen(personal_characteristics[1]) + strlen(personal_characteristics[2]) + strlen(value_statement) + 50));

  sprintf(content,"I’m writing in response to your recently advertised position for a %s.
  I am very interested in this opportunity with %s and believe that my qualifications,
  education and professional experience would make me a strong candidate for the position.
  I am a %s, %s, and %s professional who %s.", role_title, company, personal_characteristics[0],
  personal_characteristics[1], personal_characteristics[2], value_statement);

  printf("%s\n",content);

  return 0;
}
