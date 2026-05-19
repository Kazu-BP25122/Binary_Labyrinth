//ここは見ないでね、ターミナルだけ見て～～～
//変えたよ～

#include<stdio.h>
void txt(char message[120]){
    printf("%s\n>>>",message);
    getchar();
    return;
}
void STAGE1_txt(){
    txt("めがさめた。みおぼえのない、ばしょだ。めのまえにはとびらがある。([Enter]で進む)");
    txt("ゆきが積もっている。");
    txt("\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000010000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000\n000000000000000000000000000000000000000");
    txt("さむい。めのまえの、たてものに、はいらなければ、しんでしまうだろう。");
    txt("とびらには、かぎがかかっている。");
}
void STAGE2_txt(){
    txt("扉が開いた。");
    txt("先ほどの緊張が、一気にほどけたように感じる。");
    txt("静かに扉が閉じた。");
    txt("閉じ込められたようだ。");
    txt("壁にはHとAの二つの文字が書れている。");
    txt("どことなく和風な雰囲気を感じる。");
}
void STAGE3_txt(){
    txt("壁の中に吸い込まれた。");
    txt("別の部屋にワープ(？)したようだ。");
    txt("先ほどまでの穏やかさは、微塵も残っていない。");
    txt("まるで他を拒んでいるようだ。");
    txt("この部屋の壁にも模様が描かれている。");
    txt("\n011010010    011010010\n101101000    110000110\n111010111    101111101\n000111110    011010000\n110100001    100001011\n010011100    001110010\n100011000    100011000");
}
void STAGE4_txt(){
    txt("不思議な光に包まれる。");
    txt("新たな部屋の壁には文字が刻まれている。");
}
void END_txt(){
    txt("刹那、空間が裂けた。");
    txt("衝撃が落ち着くと、そこにはよく知っている景色が見えた。");
    txt("「夢なんて久しぶりに見た」");
    txt("そう信じて、なんてことない今日を歩んでいくだろう。");
}
int main(){
    STAGE1_txt();
    while(1){
        unsigned char First_KEY=70;
        unsigned char input=0;
        printf("\n\nFirst_KEY(NUMBER):");
        scanf(" %hhu",&input);
        if(!(First_KEY^input)){
            while(getchar() != '\n');
            break;
        }
        printf("\n<<ERROR>>");
        while(getchar() != '\n');
    }
    printf("\n<<SUCCSESS>>\n\n");
    STAGE2_txt();
    while(1){
        unsigned char Second_KEY = 'I';
        unsigned char input=0;
        printf("\n\nSecond_KEY(ALPHABET):");
        scanf(" %c",&input);
        if(!(Second_KEY^input)){
            while(getchar() != '\n');
            break;
        }
        printf("\n<<ERROR>>");
        while(getchar() != '\n');
    }
    printf("\n<<SUCCSESS>>\n\n");
    STAGE3_txt();
    while(1){
        unsigned char Third_KEY=88;
        unsigned char input=0;
        printf("\n\nThird_KEY(NUMBER):");
        scanf(" %hhu",&input);
        if(!(Third_KEY^input)){
            while(getchar() != '\n');
            break;
        }
        printf("\n<<ERROR>>");
        while(getchar() != '\n');
    }
    printf("\n<<SUCCSESS>>\n\n");
    STAGE4_txt();
    while(1){
        printf("[CHAIN THE TRAIL]:");
        char input[100];
        scanf(" %99s",input);
        if((input[0]=='F')&&(input[1]=='I')&&(input[2]=='X')&&(input[3]=='\0')){
            while(getchar() != '\n');
            break;
        }
        printf("\n<<ERROR>>");
        while(getchar() != '\n');
    }
    printf("\n<<SUCCSESS>>\n\n");
    END_txt();
    txt("異変の解消に成功。任務終了です。");
    printf("\nTHANK YOU FOR PRAYING!!\n--------------------------\nBINARY_LABYRINTH\n--------------------------\n                   by KAZU\n");
}