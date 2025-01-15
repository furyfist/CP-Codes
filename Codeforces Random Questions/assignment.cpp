#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
    vector<int> heap; // Vector to store heap elements

    // Function to maintain the heap property (heapify up)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]); // Swap with parent
                index = parent; // Move to parent index
            } else {
                break; // If no swap needed, exit
            }
        }
    }

    // Function to maintain the heap property (heapify down)
    void heapifyDown(int index) {
        int size = heap.size();
        while (index < size) {
            int largest = index; // Assume current index is largest
            int leftChild = 2 * index + 1; // Left child index
            int rightChild = 2 * index + 2; // Right child index

            // Check if left child exists and is greater than the largest
            if (leftChild < size && heap[leftChild] > heap[largest]) {
                largest = leftChild;
            }

            // Check if right child exists and is greater than the largest
            if (rightChild < size && heap[rightChild] > heap[largest]) {
                largest = rightChild;
            }

            // If the largest is not the current index, swap and continue
            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest; // Move to the largest index
            } else {
                break; // If already in correct position, exit
            }
        }
    }

public:
    // Function to insert an element into the priority queue
    void enqueue(int value) {
        heap.push_back(value); // Add element to the end
        heapifyUp(heap.size() - 1); // Restore the heap property
        cout << value << " enqueued to priority queue." << endl;
    }

    // Function to remove and return the highest priority element
    int dequeue() {
        if (heap.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return -1; // Indicate an invalid operation
        }
        
        int maxElement = heap[0]; // The highest priority element
        heap[0] = heap.back(); // Move the last element to the root
        heap.pop_back(); // Remove the last element
        heapifyDown(0); // Restore the heap property
        return maxElement; // Return the highest priority element
    }

    // Function to display the elements of the priority queue
    void display() {
        cout << "Priority Queue elements: ";
        for (int value : heap) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(15);
    pq.enqueue(30);
    pq.enqueue(40);

    pq.display(); // Display current elements in the queue

    cout << "Dequeued: " << pq.dequeue() << endl; // Remove and display highest priority element
    pq.display(); // Display remaining elements
    
    cout << "Dequeued: " << pq.dequeue() << endl; // Remove and display another highest priority element
    return 0;
}
