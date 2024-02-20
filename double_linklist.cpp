#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node *previous;

public:
    Node()
    {
        data = 0;
        next = NULL;
        previous = NULL;
    }

    Node(int data)
    {
        this->data = data;
        next = NULL;
        previous = NULL;
    }
    void set_data(int data)
    {
        this->data = data;
    }
    int get_data()
    {
        return data;
    }

    void set_next(Node *next)
    {
        this->next = next;
    }
    Node *get_next()
    {
        return next;
    }

    void set_previous(Node *previous)
    {
        this->previous = previous;
    }
    Node *get_previous()
    {
        return previous;
    }
};
class Linklist
{
    Node *head;

public:
    Linklist()
    {
        head = NULL;
    }
    void insert_first(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {

            head = newnode;
        }
        else
        {
            head->set_previous(newnode);
            newnode->set_next(head);
            head = newnode;
        }
    }
    void traverse_data()
    {
        if (head == NULL)
        {
            cout << "list is empty";
        }
        else
        {
            Node *travers = head;
            while (travers != NULL)
            {
                cout << travers->get_data() << endl;
                travers = travers->get_next();
            }
        }
    }

    void insert_between(int data, int position)
    {
        if (position <= 0)
        {
            cout << "invalid position\n";
        }
        else
        {
            if (head == NULL || position == 1)
            {
                insert_first(data);
            }
            else
            {
                Node *newnode = new Node(data);
                Node *traverse = head;
                Node *follow;
                int i = 1;

                while (i < position)
                {
                    follow = traverse;
                    traverse = traverse->get_next();

                    if (traverse != NULL)
                    {
                        i++;
                    }
                    else
                    {
                        insert_end(data);
                        return;
                    }
                }
                newnode->set_next(traverse);
                traverse->set_previous(newnode);
                follow->set_next(newnode);
            }
        }
    }

    void insert_end(int data)
    {
        Node *new_node = new Node(data);
        Node *traverse = head;
        if (head == NULL)
        {
            insert_first(data);
        }
        else
        {
            while (traverse->get_next() != NULL)
            {

                traverse = traverse->get_next();
            }

            traverse->set_next(new_node);
            new_node->set_previous(traverse);
        }
    }
    void delete_first()
    {
        if (head == NULL)
        {
            cout << "list is empty\n";
        }
        else
        {
            Node *traverse = head;
            head = traverse->get_next();
            delete traverse;
            cout << "data deleted\n";
        }
    }
    void delete_between(int position)
    {
        if (position <= 0)
        {
            cout << "position invalid";
        }
        else
        {
            if (head == NULL || position == 1)
            {
                delete_first();
            }
            else
            {
                Node *transverse = head;
                Node *follow;
                int i = 1;
                while (i < position)
                {
                    follow = transverse;
                    transverse = transverse->get_next();
                    if (transverse != NULL)
                    {
                        i++;
                    }
                    else
                    {
                        cout << "invalid position";
                        return;
                    }
                }
                follow->set_next(transverse->get_next());
                delete transverse;
                transverse = follow;
                follow = follow->get_next();
                follow->set_previous(transverse);
            }
        }
    }

    void delete_end()
    {
        if (head == NULL)
        {
            cout << "list is empty\n";
        }
        else
        {
            Node *travers = head;
            Node *follow;
            while (travers->get_next() != NULL)
            {
                follow = travers;
                travers = travers->get_next();
            }
            delete travers;
            follow->set_next(NULL);
        }
    }
    void print_rev()
    {
        Node *travers = head;
        Node *temp = head;
        while (travers->get_next() != NULL)
        {
            travers = travers->get_next();
        }
        while (travers != NULL)
        {
            cout << travers->get_data() << endl;
            travers = travers->get_previous();
        }
    }
};
int main()
{
    Linklist l1;
    l1.insert_end(10);
                                    // l1.insert_end(20);
    // l1.insert_end(30);
    // l1.insert_end(40);
                                  // l1.delete_between(4);
   
                                    // l1.delete_end();
    l1.insert_between(550,2);
    l1.traverse_data();
    // l1.print_rev();
    return 0;
}