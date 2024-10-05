#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    struct node{
        node* next = NULL;
        node* prev = NULL;
        int val;
        int key;

        node(int _key, int _val)
        {
            val = _val;
            key = _key;
        }
    };

    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);
    int cap;
    unordered_map<int, node*> m;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void delNode(node* delNode)
    {
        node* delPrev = delNode->prev;
        node* delNext = delNode->next;

        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

    void addNode(node* newNode)
    {
        node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }
    
    int get(int key) {
        if(m.find(key) != m.end())
        {
            node* target = m[key];
            int data = target->val;
            m.erase(key);
            
            delNode(target);
            addNode(target);

            m[key] = head->next;
            return data;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end())
        {
            node* existing = m[key];
            m.erase(key);
            delNode(existing);
        }

        if(m.size() == cap)
        {
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        node* curr = new node(key, value);
        addNode(curr);
        m[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main(){

    
    return 0;
}