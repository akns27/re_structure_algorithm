#include <stdio.h>
#include <stdbool.h>
//#include <string.h>

typedef struct Goods {
    char name[100];
    int price;
    bool limit;
} Goods;

int main() {
    Goods* item1 = (Goods*)malloc(sizeof(Goods));// 구조체 포인터 ptr를 선언, 메모리를 동적으로 할당
	 
    strcpy(item1->name, "교향곡 전집");//item1의 name에 "교향곡 전집"을 복사
    item1->price = 100000;//price에 넣기
    item1->limit = false;//Goods 구조체의 limit 멤버를 false로 초기화. "교향곡 전집(item1)"이 "일반판"이라는 걸 나타냄
    
    Goods* ptr = item1;  // ptr이 item1을 가리키도록 합니다.

    ptr->limit = true;//교향곡 전집(ptr)이 한정판임을 나타냄

    if (ptr->limit == true)//limit값이 true면 한정판
        printf("한정판\n");
    else//아니면 일반판
        printf("일반판\n");

    return 0;
}
