#include<cstdio>

int main () {
   FILE *fp = fopen("test.txt", "wb");
   char str[] = "shane is legendary";
   int x = 245;
   for(int i=0;i<5;i++)
      fwrite(str , 18 , 1 , fp);
   fwrite(&x , 4, 1, fp);
   fwrite(&x , 4 , 1, fp);
   fclose(fp);
   return(0);
}