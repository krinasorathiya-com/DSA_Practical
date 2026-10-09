#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SCLL {
    Node* head = NULL;

public:
    void insert(int k, int position) {
        Node* n = new Node{k, NULL};

        if (head == NULL) {
            head = n;
            n->next = head;
            return;
        }

        if (position == 1) {
            Node* t = head;
            while (t->next != head)
                t = t->next;

            n->next = head;
            t->next = n;
            head = n;
            return;
        }

        Node* t = head;
        for (int i = 1; i < position - 1 && t->next != head; i++)
            t = t->next;

        n->next = t->next;
        t->next = n;
    }

    void remove(int k) {
        if (head == NULL) return;

        Node *t = head, *prev = NULL;

        do {
            if (t->data == k) break;
            prev = t;
            t = t->next;
        } while (t != head);

        if (t->data != k) return;

        if (t->next == t) {
            delete t;
            head = NULL;
            return;
        }

        if (t == head) {
            Node* last = head;
            while (last->next != head)
                last = last->next;

            head = head->next;
            last->next = head;
        }
        else {
            prev->next = t->next;
        }

        delete t;
    }

    void display() {
        if (head == NULL) {
            cout << "Empty\n";
            return;
        }

        Node* t = head;
        do {
            cout << t->data << " ";
            t = t->next;
        } while (t != head);

        cout << endl;
    }
};

struct DNode {
    int data;
    DNode *next, *prev;
};

class DCLL {
    DNode* head = NULL;

public:
    void insert(int x, int pos) {
        DNode* n = new DNode{x, NULL, NULL};

        if (head == NULL) {
            head = n;
            n->next = n->prev = n;
            return;
        }

        if (pos == 1) {
            n->next = head;
            n->prev = head->prev;
            head->prev->next = n;
            head->prev = n;
            head = n;
            return;
        }

        DNode* t = head;
        for (int i = 1; i < pos - 1 && t->next != head; i++)
            t = t->next;

        n->next = t->next;
        n->prev = t;
        t->next->prev = n;
        t->next = n;
    }

    void remove(int x) {
        if (head == NULL) return;

        DNode* t = head;

        do {
            if (t->data == x) break;
            t = t->next;
        } while (t != head);

        if (t->data != x) return;

        if (t->next == t) {
            delete t;
            head = NULL;
            return;
        }

        t->prev->next = t->next;
        t->next->prev = t->prev;

        if (t == head)
            head = t->next;

        delete t;
    }

    void display() {
        if (head == NULL) {
            cout << "Empty\n";
            return;
        }

        DNode* t = head;
        do {
            cout << t->data << " ";
            t = t->next;
        } while (t != head);

        cout << endl;
    }
};


int main() {
    int n, q, x;

    cin >> n;

    SCLL s;
    DCLL d;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        s.insert(x, i);
        d.insert(x, i);
    }

    cin >> q;

    while (q--) {
        string op;
        cin >> op;

        if (op == "JOIN") {
            int student, pos;
            cin >> student >> pos;

            s.insert(student, pos);
            d.insert(student, pos);
        }
        else if (op == "LEAVE") {
            cin >> x;

            s.remove(x);
            d.remove(x);
        }
        else if (op == "DISPLAY") {
            s.display();
        }
    }

    return 0;
}
