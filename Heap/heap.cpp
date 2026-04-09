#include <iostream>
using namespace std;

class MinHeap {
    int heap[100];  
    int size;

public:
    MinHeap() {
        size = 0;
    }

    void insert(int val) {
        heap[size] = val;
        int i = size;
        size++;

        while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
            swap(heap[(i - 1) / 2], heap[i]);
            i = (i - 1) / 2;
        }
    }

    void deleteRoot() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return;
        }

        heap[0] = heap[size - 1];
        size--;

        int i = 0;

        while (true) {
            int left = 2*i + 1;
            int right = 2*i + 2;
            int smallest = i;

            if (left < size && heap[left] < heap[smallest])
                smallest = left;

            if (right < size && heap[right] < heap[smallest])
                smallest = right;

            if (smallest != i) {
                swap(heap[i], heap[smallest]);
                i = smallest;
            } else {
                break;
            }
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(10);
    h.insert(30);
    h.insert(20);
    h.insert(5);

    cout << "Heap after insertion: ";
    h.display();

    h.deleteRoot();

    cout << "Heap after deletion: ";
    h.display();

    return 0;
}