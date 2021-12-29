#include <iostream>
#define MAX_SIZE 1001
using namespace std;

typedef struct {
    int queue[MAX_SIZE];
    int front;
    int rear;
} Header;

void init_queue(Header *header) {
    header->front = header->rear = 0;
}

bool is_queue_full(Header *header) {
    return (header->rear + 1) % MAX_SIZE == header->front;
}

bool is_queue_empty(Header *header) {
    return header->front == header->rear;
}

void push_queue(Header *header, int data) {
    if(is_queue_full(header)) {
        return;
    }
    header->queue[header->rear] = data;
    header->rear = (header->rear + 1) % MAX_SIZE;
}

int pop_queue(Header *header) {
    if(is_queue_empty(header)) {
        return -1;
    }
    int data = header->queue[header->front];
    header->front = (header->front + 1) % MAX_SIZE;
    return data;
}

int size_queue(Header *header) {
    if(header->front > header->rear)
        return MAX_SIZE + header->rear - header->front;
    else
        return header->rear - header->front;
}

int main() {
    int N, K;
    Header q;
    init_queue(&q);

    cin >> N >> K;

    for(int i = 1; i <= N; i++) {
        push_queue(&q, i);
    }

    cout << '<';
    while(size_queue(&q) > 1) {
        for(int j = 0; j < K-1; j++) {
            push_queue(&q, pop_queue(&q));
        }
        cout << pop_queue(&q) << ", ";
    }
    cout << pop_queue(&q) << '>' << endl;
}