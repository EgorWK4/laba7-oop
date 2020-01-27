

#include <vector>
#include <list>
#include <iostream>
#include <string>

template <class T, class Container = std::vector<T>>
struct Stack {

private:
    Container cont;

public:
    using container_type = Container;
    using value_type = typename Container::value_type;
    using reference = typename Container::reference;
    using size_type = typename Container::size_type;
    using const_reference = typename Container::const_reference;
    
public:
    void push(const value_type& x)
    {
        cont.push_back(x);
    }
    reference top() {
        return cont.back();
    }

    bool empty() const {
        return cont.empty();
    }

    size_type size() const {
        cont.size();
    }

    void swap(Stack& other) noexcept {
        using std::swap;
        swap(cont, other.cont);
    }

    void pop() noexcept {
      
        cont.pop();
    }

};
int main()
{
    Stack<int> a;
    a.push(10);
    a.push(20);
    Stack <std::string> b;
    b.push("tttt");
    std::cout << a.top();
    std::cout << b.top();
    

}
