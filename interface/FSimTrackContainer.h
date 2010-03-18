#ifndef FSimTrackContainer_H
#define FSimTrackContainer_H

#include "FastSimulation/Event/interface/FSimTrack.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefProd.h"
#include "DataFormats/Common/interface/RefVector.h"

#include <vector>
/// why defined in namespace edm:: ?? (L.L.)
namespace edm {
  typedef std::vector<FSimTrack> FSimTrackContainer;
}
typedef edm::Ref<edm::FSimTrackContainer> FSimTrackRef;
typedef edm::RefProd<edm::FSimTrackContainer> FSimTrackRefProd;
typedef edm::RefVector<edm::FSimTrackContainer> FSimTrackRefVector;

#endif
