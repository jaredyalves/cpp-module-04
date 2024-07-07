#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
public:
    const std::string& getType() const;

    virtual AMateria* clone() const = 0;
    virtual void      use(ICharacter& target) = 0;

    AMateria();
    explicit AMateria(const std::string& type);
    AMateria(const AMateria& other);
    virtual ~AMateria();

    AMateria& operator=(const AMateria& other);

protected:
    std::string _type;
};

#endif
