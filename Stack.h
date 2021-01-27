template <typename T>
class Stack{
public:
    virtual void push(T value) = 0;
    virtual T pop() = 0;
    virtual T peek() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual ~Stack() { }
};