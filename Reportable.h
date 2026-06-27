#ifndef REPORTABLE_H
#define REPORTABLE_H
#include "Entity.h"
#include <string>
using namespace std;

class Reportable : public virtual Entity {
public:
    virtual string generateReport() const = 0;
    virtual ~Reportable() = default;
};
#endif