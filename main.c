#include<stdio.h>
#include<stdlib.h>


char ch;
void switchVaribles(){
  int a,b,c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}


void maxOfThreeNums(){
  int a,b,c,max;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("max = %d", max);
}

void maxOfNNums(){
  int a,n,max,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    i = 1;
    printf("Number %d = ", i);
    scanf("%d", &a);
    max = a;
    while(n > i){
        i++;
        printf("Number %d = ", i);
        scanf("%d", &a);
        if(a > max){
            max = a;
        }
    }
    printf("\n");
    printf("Max = %d", max);
}

void SumOfNumsFrom1ToN(){
  int n,sum,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);
    sum = 0;
    for(i = 0;i <= n; i++){
        sum = sum + i;
    }
    printf("Sum = %d", sum);
}

void SumOfNNumns(){
  int n,a,sum,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    printf("a = ");
    scanf("%d", &a);
    sum = a;
    i = 1;
    while(n > i){
        printf("a = ");
        scanf("%d", &a);
        sum = sum + a;
        i++;
    }
    printf("Sum = %d", sum);
}

void SredenUspeh(){
  int n,i,a,sum,avr;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    sum = 0;
    for(i = 1;i <= n; i++){
        do{
            printf("Ocenka na uchenik %d = ", i);
            scanf("%d", &a);
            sum = sum + a;
        }
        while(a < 2 || a > 6);
    }
    avr = sum / n;
    printf("Sredniq uspeh e: %d", avr);
}

void ProizvedenieOt1DoN(){
  int n,sum,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);
    sum = 1;
    for(i = 1;i <= n; i++){
        sum = sum * i;
    }
    printf("%d", sum);
}

void BroiNaCifrite(){
  int n,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    i = 0;
    while(n != 0){
        n = n / 10;
        i++;

    }
    printf("%d", i);
}

void SumaOtCifrite(){
  int n,i,sum;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    i = 0;
    sum = 0;
    while(n != 0){
        sum = sum + n % 10;
        n = n / 10;
        i++;

    }
    printf("%d", sum);
}

void M_zapisanoKatoNnaobratno(){
  int n,m;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);
    m = 0;
    while(n != 0){

        m = m*10 + n%10;
        n = n/10;
    }
    printf("m = %d", m);
}

void KolkoPutiSeSreshta(){
  int n,m,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    do{
        printf("Diggit to count = ");
        scanf("%d", &m);
    }
    while(m < 1);

    i = 0;
    while(n != 0){
        if(n % 10 == m){
            i++;
        }
        n /= 10;
    }
    if(i){
        printf("%d time/s", i);
    }
    else{
        printf("There are no %ds", m);
    }
}

void DaliSeSreshta(){
    int n,m,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    do{
        printf("Diggit to count = ");
        scanf("%d", &m);
    }
    while(m < 1);

    i = 0;
    while(n != 0){
        if(n % 10 == m){
            i++;
            break;
        }
        n /= 10;
    }
    if(i){
        printf("YES");
    }
    else{
        printf("NO");
    }
}

void EdiniciV_DvoichenZapis(){
  int n,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    i = 0;
    while(n){
        if(n % 2 == 1){
            i++;
        }
        n /= 2;
    }
    printf("%d edinici v N", i);
}

void ProstoIliNe(){
  int n,i,count;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 2);

    i = 2;
    while(n % i > 0){
        i++;
    }

    if(i == n){
        printf("N e prosto");
    }
    else {
        printf("N NE e prosto");
    }
}

void Deliteli_i_tehniqBroi(){
  int n,i,count;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 2);

    i = 1;
    count = 0;
    while(n >= i){
        if(n % i == 0){
            printf("%d\n", i);
            i++;
            count++;
        }
        else{
            i++;
        }
    }
    printf("Ima %d delitelq", count);
} 

void vsichkiProstiMnojiteli(){
  int n,i = 0,k = 2,d = 2;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n<3);

    while(k<=n){
        if(n%k==0){
            while(k%d!=0){
                d++;
            }
            if(d==k){
                i++;
                printf("%d\n", k);

            }
        }
        k++;
    }
    printf("\nIma %d prosti delitelq", i);
}

void SumataNaChislaDelqshtiSeNa3(){
  int n,a,sum,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    printf("\n");
    printf("a = ");
    scanf("%d", &a);
    if(a % 3 == 0){
        sum = a;
    }
    else{
        sum = 0;
    }
    i = 1;
    while(n > i){
        printf("a = ");
        scanf("%d", &a);
        if(a % 3 == 0){
            sum = sum + a;
        }
        i++;
    }
    printf("Sum = %d", sum);

}

void MaxNaChislaDelqshtiSeNa3(){
  int n,a,max,i;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);

    printf("\n");
    printf("a = ");
    scanf("%d", &a);
    if(a % 3 == 0){
        max = a;
    }
    else{
        max = 0;
    }
    i = 1;
    while(n > i){
        printf("a = ");
        scanf("%d", &a);
        if(a % 3 == 0){
            if(a > max){
                max = a;
            }
        }
        i++;
    }
    printf("Max = %d", max);
}

void MzapisanoS_chetniteCifriNaN(){
  int n,m,k;
    do{
        printf("n = ");
        scanf("%d", &n);
    }
    while(n < 1);
    k = 1;
    while(n != 0){
        if(n % 2 == 0){
            m = m + n%10*k;
            k = k * 10;
        }
        n = n / 10;
    }
    printf("m = %d", m);
}
















int main(void) {
  int ans;
  int ans_b;

    do{

      printf("\n1. Raznmeni stoinostite na dve promenlivi\n");
      printf("\n2. Da se nameri max ot tri chisla\n");
      printf("\n3. Da se nameri max ot n chisla\n");
      printf("\n4. Sumata na estestvenite chisla ot 1 do n\n");
      printf("\n5. Sumata na n proizvolni chisla\n");
      printf("\n6. Sreden uspeh na uchenicite ot edin klas\n");
      printf("\n7. Proizvedenieto na chislata ot 1 do n\n");
      printf("\n8. Broq na cifrite na estestvenoto chislo n\n");
      printf("\n9. Sumata na cifrite na estestvenoto chislo n\n");
      printf("\n10. M zapisano s cifrite na N na obratno\n");
      printf("\n11. Kolko puti dadena cifra se sreshta v zapisa na N\n");
      printf("\n12. Dali dadena cifra se sreshta v N\n");
      printf("\n13. Kolko edinici ima v dvoichniq zapis na dadeno estestveno chislo\n");
      printf("\n14. Dali dadeno chislo e prosto ili ne\n");
      printf("\n15. Koi sa delitelite na dadeno estestveno chislo i tehniq broi\n");
      printf("\n16. Da se izvedat vsichki prosti mnojiteli na estestveno chislo N i tehniq broi\n");
      printf("\n17. Sumata na n proizvolni chisla no samo tezi koito se delqt na 3\n");
      printf("\n18. Max na n proizvolni chisla no samo tezi koito se delqt na 3\n");
      printf("\n19. Da se poluchi M samo s chetnite cifri na N\n");
      printf("\nEnter '0' to exit the menu!\n");

      printf("\n Select program: ");
      scanf("%d", &ans);
      if(ans == 0){
        return 0;
      }
      if(ans > 19 || ans < 0){
        printf("Invalid program!");
        printf("\n\n\n\n");
        continue;
      }

      printf("\n\n");
      printf("1. Run the programm\n");
      printf("2. Show the code\n");
      printf("Chose an option: ");
      scanf("%d", &ans_b);
      switch(ans){
        case 1:
          if(ans_b == 1)switchVaribles();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("switchVaribles","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 2:
          if(ans_b == 1)maxOfThreeNums();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("maxOfThreeNums","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;
        case 3:
          if(ans_b == 1)maxOfNNums();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("maxOfNNums","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 4:
          if(ans_b == 1)SumOfNumsFrom1ToN();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("SumOfNumsFrom1ToN","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 5:
          if(ans_b == 1)SumOfNNumns();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("SumOfNNumns","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 6:
          if(ans_b == 1)SredenUspeh();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("SredenUspeh","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 7:
          if(ans_b == 1)ProizvedenieOt1DoN();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("ProizvedenieOt1DoN","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 8:
          if(ans_b == 1)BroiNaCifrite();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("BroiNaCifrite","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 9:
          if(ans_b == 1)SumaOtCifrite();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("SumaOtCifrite","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 10:
          if(ans_b == 1)M_zapisanoKatoNnaobratno();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("M_zapisanoKatoNnaobratno","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 11:
          if(ans_b == 1)KolkoPutiSeSreshta();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("KolkoPutiSeSreshta","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 12:
          if(ans_b == 1)DaliSeSreshta();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("DaliSeSreshta","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 13:
          if(ans_b == 1)EdiniciV_DvoichenZapis();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("EdiniciV_DvoichenZapis","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 14:
          if(ans_b == 1)ProstoIliNe();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("ProstoIliNe","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 15:
          if(ans_b == 1)Deliteli_i_tehniqBroi();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("Deliteli_i_tehniqBroi","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 16:
          if(ans_b == 1)vsichkiProstiMnojiteli();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("vsichkiProstiMnojiteli","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 17:
          if(ans_b == 1)SumataNaChislaDelqshtiSeNa3();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("SumataNaChislaDelqshtiSeNa3","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 18:
          if(ans_b == 1)MaxNaChislaDelqshtiSeNa3();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("MaxNaChislaDelqshtiSeNa3","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;

        case 19:
          if(ans_b == 1)MzapisanoS_chetniteCifriNaN();
          else if(ans_b == 2){
            printf("\n\n\n");
            FILE *f;
            int i;
            if(f=fopen("MzapisanoS_chetniteCifriNaN","r"))
            {
                while(!feof(f))
                {
                    do 
                    {
                        /* Read single character from file */
                        ch = fgetc(f);

                        /* Print character read on console */
                        putchar(ch);

                    } while(ch != EOF);
                }
                fclose(f);
            }
            else printf("Error opening file for reading!");
          }
          break;
        case 0: return 0; break;
        default: printf("Invalid programe!");
        printf("\n\n\n");
      }
    }while(1);
    return 0;
  }