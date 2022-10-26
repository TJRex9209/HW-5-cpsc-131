#include <iostream>
#include <vector>
#include <bits/stdc++.h>

// using namespace std;

// For this homework, you are going to implement an extendable vector based queue that
// uses "jump" trick to save space.
// Finish function
//              front() that prints the first element in the queue
//              deque() that dequeues the queue
//          	enque(val) that enqueues val to the queue
//              print_vect() that prints out vect_que.
// Demonstrate that your code works in main.
// Refer to class PPT if you forgot all the different cases.

template <class T>
class vect_queue
{
    std::vector<T> vect_que;
    size_t size_;
    int que_front_;

public:
    template <class Tm>
    vect_queue(T val)
    {
        vect_que.push_back(val);
        size_ = 1;
        que_front_ = 0;
    }
    T front() const
    { // returns the frist element
        return vect_que.front();
    }
    void deque()
    { // delete the first element

        if (vect_que.size() != 1)
        {
            if (vect_que.begin == vect_que.end())
            {
                vect_que.erase(vect_que.front);
                vect_que.front() = vect_que[0];
            }
            else if (vect_que.begin != vect_que.end())
            {
                vect_que.erase(vect_que.front);
                vect_que.front() = vect_que.front() + 1;
            }
        }
        else if (vect_que.size() == 1)
        {
            vect_que.begin() = vect_que[0];
            vect_que.end() = vect_que[0];
        }
        else
        {
            Error_message("deque");
        }
        // vect_que.earse(vect_que.begin());

    }
    void enque(T val)
    { // adds val into the first element



        // vect_que.insert(vect_que.begin(), val);
    }
    void print_vect() const
    { // print vector
        for (int i = 0; i < vect_que.size(); i++)
        {
            std::cout << vect_que[i] << " ";
        }
        std::cout << std::endl;
    }
    void Error_message(std::string error){
            std::cout
        << "There is an error at " << error << std::endl;
    }
};

int main()
{
    // Demonstrate your code works by adding/removing values in a vect_que class
    // object. Print out your result.
    // You should include front index of queue, back index of queue, and the entire
    // vector (not queue) for each case.
    vect_queue<int> myVect{};

    // std::vector<int> myVect2{1,2,3,4,5};
    // vect_queue<int> myVect[5];
    // case 1: add to an empty queue
    myVect.enque(1);

    // case 2: add to a non-empty queue without jump
        myVect.enque(1);

    // case 3: add to a non-empty queue with a jump
        myVect.enque(1);


    // case 4: remove from a queue with number of elements > 1
    //         and que.front not at vect.back
    myVect.deque();

    // case 5: remove from a queue with number of elements > 1
    //         and que.front at vect.back
    myVect.deque();

    // case 6: remove from a queue with 1 element in it and que.front
    //         not at vect[0]
    myVect.deque();


    std::cout << "\nprogram ends here.\n";

    return 0;
}