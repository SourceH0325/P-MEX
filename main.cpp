#include <stdio.h>

int main() {
  FILE* D = fopen("ID_AND_PASSWORD.txt","w");
  char C[50];
  char B[50];

  printf("아이디: ");
  fgets(B, sizeof(B), stdin);
  fputs("ID: ", D);
  fputs(B, D);
  
  printf("비밀번호: ");
  fgets(C, sizeof(C), stdin);
  fputs("PASSWORD: ", D);
  fputs(C, D);

  fclose(D);

  printf("저장되었습니다!");

  return 0;
}
