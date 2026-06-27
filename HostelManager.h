#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H
#include "Accommodation.h"
#include "Reportable.h"
#include "HostelBlock.h"

class HostelManager : public Accommodation, public Reportable {
private:
    HostelBlock* block;
public:
    HostelManager(HostelBlock* b);
    void allocateRoom() override;
    void vacateRoom() override;
    string generateReport() const override;
};
#endif
