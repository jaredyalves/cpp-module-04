#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define IDEAS_MAX 100

class Brain
{
public:
    std::string getIdea(int idx) const;
    void        setIdea(int idx, const std::string& idea);

    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator=(const Brain& other);

private:
    std::string _ideas[IDEAS_MAX];
};

#endif //BRAIN_HPP
