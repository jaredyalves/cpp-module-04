#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

class AMateria;

class IMateriaSource
{
public:
    virtual void      learnMateria(AMateria* m) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;

    virtual ~IMateriaSource() {}
};

#endif
