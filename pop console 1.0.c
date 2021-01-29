#include <stdio.h>
#include <stdlib.h>



int main() {
    int a;

    printf("---------------------------------\n");
    printf("******     *********   ******   |\n");
    printf("*     *    *       *   *     *  |\n");
    printf("*      *   *       *   *      * |\n");
    printf("*      *   *       *   *      * |\n");
    printf("********   *       *   ******** |\n");
    printf("*          *       *   *        |\n");
    printf("*          *       *   *        |\n");
    printf("*          *       *   *        |\n");
    printf("*          *********   *        |\n");
    printf("---------------------------------\n");
    printf("POP CONSOLE\n");
    printf("A CONSOLE BY MIC\n");
    printf("WE HAVE TWO THINGS\n");
    printf("TYPE IN WHAT YOU WANT TO DO\n");
    printf("LAUNCH CALCULATOR : 1\n");
    printf("LAUNCH EDITOR : 2\n");
    HERE : printf("pop-console >>");
    scanf("%d", &a);
    if (a == 1){
        printf("calculator\n");
        printf("1 : add\n");
        printf("2 : subtract\n");
        printf("3 : multiplied\n");
        printf("4 : divide\n");
        printf("5 : get out\n");
        START :printf("pop console -- calculator>>");
        int typein;
        scanf("%d",&typein);
        int l , k;
        if (typein == 1){
            printf("type in two numbers");
            scanf("%d,%d",&l,&k);
            printf("the value is %d\n",l + k);
            goto START;
        } else if (typein == 2){
            printf("type in two numbers");
            scanf("%d,%d",&l,&k);
            printf("the value is %d\n",l - k);
            goto START;
        } else if (typein == 3){
            printf("type in two numbers");
            scanf("%d,%d",&l,&k);
            printf("the value is %d\n",l * k);
            goto START;
        } else if (typein == 4){
            printf("type in two numbers");
            scanf("%d,%d",&l,&k);
            printf("the value is %d\n",l / k);
            goto START;
        } else if (typein == 5){
            goto HERE;
        } else if (typein > 5){
            printf("i can't do it\n");
            goto START;
        } else if (typein < 1){
            printf("i can't do it\n");
            goto START;
        }
    } else if (a == 2){
        printf("file editor\n");
        printf("you can use your windows notepad or other programmes to edit your file\n");
        printf("1 : add something\n");
        printf("2 : get out\n");
        HE:printf("pop console -- file editor>>");
        int com;
        scanf("%d",&com);
        if (com == 1){
            printf("what file do you want to edit?\n");FILE *fp = NULL;
            char in[1000];
            char path;
            printf("copy the path of the file\n");
            printf("WARN : THE PATH MUST BE LIKE THIS -->'*://***//****//.....//****.***'\n");
            scanf("%s",&path);
            fp = fopen(&path , "w+");
            printf("the thing you want to add:\n");
            scanf("%s",in);
            fprintf(fp,"%s",in);
            fclose(fp);
            printf("success\n");
            goto HERE;
        } else if (com == 2){
            goto HERE;
        } else if (com <1){
            goto HE;
        } else if (com >2){
            goto HE;
        }
    } else if (a == 3){
        goto OUT;
    }
    else{
        printf("sorry\n");
        goto HERE;
    }
    system("pause");
    OUT:return 0;
}

