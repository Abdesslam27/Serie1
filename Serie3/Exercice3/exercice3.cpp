#include<iostream>
using namespace std;

const int MAX = 50;

struct stack {
    int *array;
    int summit;
};

void initstack(stack &s) {
    s.summit = 0;
    s.array = new int[MAX];
}

bool emptystack(stack &s) {
    return s.summit == 0;
}

bool fullstack(stack &s) {
    return s.summit == MAX;
}

void push(stack &s, int &data) {
    if (!fullstack(s)) {
        s.array[s.summit] = data;
        s.summit++;
    }
}

void pull(stack &s, int &data) {
    if (!emptystack(s)) {
        s.summit--;
        data = s.array[s.summit];
    } else {
        cout << "Empty stack!!";
    }
}

void createstack(stack &s, int n) {
    int data;
    for (int i = 0; i < n; i++) {
        cout << "Insert data: ";
        cin >> data;
        push(s, data);
    }
}

void displaystack(stack s) {
    int data;
    while (!emptystack(s)) {
        pull(s, data);
        cout << "[" << data << "] ";
    }
    cout << "\n";
}

void sortstack(stack &s) {
    int temp;
    for (int i = 0; i < s.summit - 1; i++) {
        for (int k = 0; k < s.summit - i - 1; k++) {
            if (s.array[k] < s.array[k + 1]) {
                temp = s.array[k];
                s.array[k] = s.array[k + 1];
                s.array[k + 1] = temp;
            }
        }
    }
}

bool contains(stack &s, int Element) {
    for (int i = 0; i < s.summit; i++) {
        if (s.array[i] == Element) {
            return true;
        }
    }
    return false;
}

void extreactandinsert(stack &s1, stack &s2, stack &s3) {
    int data;
    bool found = false;
    while (!emptystack(s1)) {
        pull(s1, data);
        if (data > 50) {
            if (!contains(s2, data)) {
                push(s2, data);
                found = true;
            }
            if (!contains(s3, data)) {
                push(s3, data);
                found = true;
            }
        }
    }
    if (!found) {
        cout << "NULL ELEMENT ||  less then 50 found in Stack No-1\n";
    }
}

int main() {
    stack s1, s2, s3;
    initstack(s1);
    initstack(s2);
    initstack(s3);

    int size;
    cout << "Insert the stack's size: ";
    cin >> size;
    cout << "Stack NO-1 : \n";
    createstack(s1, size);
    cout << "Stack NO-2 : \n";
    createstack(s2, size);
    cout << "Stack NO-3 : \n";
    createstack(s3, size);

    cout << "Stack NO-1: ";
    displaystack(s1);
    cout << "Stack NO-2: ";
    displaystack(s2);
    cout << "Stack NO-3: ";
    displaystack(s3);

    cout << "-----------------------------------\n";

    cout << "Stack NO-1 (Sorted): ";
    sortstack(s1);
    displaystack(s1);

    cout << "Stack NO-2 (Sorted): ";
    sortstack(s2);
    displaystack(s2);

    cout << "Stack NO-3 (Sorted): ";
    sortstack(s3);
    displaystack(s3);

    cout << "Extracting/Inserting...........\n";
    cout << "Done\n";
    extreactandinsert(s1, s2, s3);
    cout << "Stack 2: ";
    displaystack(s2);
    cout << "Stack 3: ";
    displaystack(s3);

    return 0;
}