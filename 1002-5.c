#include <stdio.h>
#include <stdlib.h>

// 定義 Linked List 節點的結構
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // 1. 宣告三個節點指標
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // 2. 利用動態記憶體配置 (malloc) 建立三個節點
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // 檢查記憶體是否配置成功
    if (head == NULL || second == NULL || third == NULL) {
        printf("記憶體配置失敗\n");
        return 1;
    }

    // 3. 儲存資料並利用 Pointer 串接節點
    // 第一個節點
    head->data = 10;
    head->next = second; // 串接到第二個節點

    // 第二個節點
    second->data = 20;
    second->next = third; // 串接到第三個節點

    // 第三個節點
    third->data = 30;
    third->next = NULL;   // 最後一個節點，指標設為 NULL

    // 4. 走訪 (Traversal) Linked List 並印出資料
    // 宣告一個指標 current 用來走訪，起點設為 head (頭節點)
    struct Node* current = head;
    
    // 當 current 不為 NULL 時，表示還沒走到串列的盡頭
    while (current != NULL) {
        printf("%d\n", current->data); // 印出當前節點的資料，並換行
        current = current->next;       // 將指標移動到下一個節點
    }

    // 5. 釋放動態配置的記憶體
    free(head);
    free(second);
    free(third);

    return 0;
}
