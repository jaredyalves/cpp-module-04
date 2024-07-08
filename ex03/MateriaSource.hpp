#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SOURCES_MAX 4

class MateriaSource : public IMateriaSource
{
public:
    void      learnMateria(AMateria* m);
    AMateria* createMateria(const std::string& type);

    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();

    MateriaSource& operator=(const MateriaSource& other);

private:
    AMateria* _sources[SOURCES_MAX];
};

#endif
