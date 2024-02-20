#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    int get_data()
    {
        return data;
    }
    void set_data(int data)
    {
        this->data = data;
    }
    Node *get_next()
    {
        return next;
    }
    void set_next(Node *next)
    {
        this->next = next;
    }
};

class Linklist
{
    Node *head;
    int count = 0;

public:
    Linklist()
    {
        head = NULL;
        // count=0;
    }
    void insertend(int data)
    {
        Node *new_next = new Node(data);

        if (head == NULL)
        {

            head = new_next;
            count++;
        }
        else
        {

            Node *traverse = head;
            while (traverse->get_next() != NULL)
            {

                traverse = traverse->get_next();
            }
            traverse->set_next(new_next);
            count++;
        }
    }
    void traverse_data()
    {
        Node *traverse = head;
        while (traverse != NULL)
        {
            cout << traverse->get_data() << endl;
            traverse = traverse->get_next();
        }
    }

    void increment_first(int data)
    {
        Node *newnode = new Node(data);

        newnode->set_next(head);
        head = newnode;
        count++;
        cout << "data added\n";
    }
    void delete_last()
    {
        if (head == NULL)
        {
            cout << "list is empty";
        }
        else
        {
            Node *dele = head;

            Node *follow;
            int i = 0;

            while (dele->get_next() != NULL)
            {
                follow = dele;
                dele = dele->get_next();
                i++;
            }
            follow->set_next(NULL);
            delete dele;
            count--;

            if (i == 0)
            {
                delete head;
                head = NULL;
                cout << "deleted\n";
            }

            else
            {

                follow->set_next(NULL);
                delete dele;
                cout << "deleted\n";
            }
        }
    }
    void delete_first()
    {
        if (head == NULL)
        {
            cout << "list is empty";
        }
        else
        {
            Node *temp = head->get_next();
            delete head;
            head = temp;
            cout << "first_deleted";
            count--;
        }
    }
    void insert_between(int data, int position)
    {

        if (position <= 0)
        {
            cout << "Invalid position";
        }
        else
        {
            Node *newnode = new Node(data);

            if (head == NULL || position == 1)
            {
                increment_first(data);
            }

            else if (position <= count)
            {

                Node *add = head;
                Node *follow = head;
                int i = 1;
                while (i < position)
                {

                    follow = add;
                    add = add->get_next();
                    i++;
                }

                follow->set_next(newnode);
                newnode->set_next(add);
            }
            else
            {
                insertend(data);
            }
        }
    }
    void delete_between(int positio)
    {

        if (positio == count)
        {

            delete_last();
        }
        else if (positio == 1)
        {
            delete_first();
        }
        else if (positio < count && positio > 1)
        {

            Node *add = head;
            Node *follow = head;
            int i = 1;
            while (i < positio)
            {

                follow = add;
                add = add->get_next();
                i++;
            }

            follow->set_next(add->get_next());
            delete add;
        }
        else
        {
            cout << "invalid position\n";
        }
    }
};

int main()
{

    Linklist l1;

    l1.insertend(10);
    l1.insertend(20);
    l1.insertend(30);
    l1.insertend(40);
    l1.increment_first(5);

    l1.insert_between(25, 3);
    l1.delete_between(1);

    l1.traverse_data();

    return 0;
}