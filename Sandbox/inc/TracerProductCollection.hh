#ifndef Sandbox_TracerProductCollection_hh
#define Sandbox_TracerProductCollection_hh
//
// Access to a bunch of TracerProdcuts created on the heap.
//
//
// Original author Rob Kutschke
//

#include "Offline/GeneralUtilities/inc/OwningPointerCollection.hh"
#include "Offline/Sandbox/inc/TracerProduct.hh"

namespace mu2e {

  typedef OwningPointerCollection<TracerProduct> TracerProductCollection;

} // namespace mu2e

#endif /* Sandbox_TracerProductCollection_hh */
