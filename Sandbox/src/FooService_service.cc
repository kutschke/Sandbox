//
// A test service that prints tracer ouptut. Used to study order of calls.
//
// $Id: FooService_service.cc,v 1.1 2012/07/24 20:00:28 kutschke Exp $
// $Author: kutschke $
// $Date: 2012/07/24 20:00:28 $
//
// Contact person Rob Kutschke
//

// C++ include files
#include <iostream>

#include "Sandbox/inc/FooService.hh"

// Framework include files
#include "art/Framework/Services/Registry/ServiceMacros.h"
#include "art/Persistency/Provenance/RunID.h"

using namespace std;

namespace mu2e {

  FooService::FooService(fhicl::ParameterSet const& pset,
                                   art::ActivityRegistry&iRegistry){
    cout << "FooService:: constructor: " << endl;
    iRegistry.watchPreBeginRun(this, &FooService::preBeginRun);
  }

  FooService::~FooService(){
    cout << "FooService::destructor" << endl;
  }

  void  FooService::preBeginRun(art::Run const& run) {
    cout << "FooService::preBeginRun: " << run.id() << endl;
  }

  void FooService::poke() const{
    cout << "FooService::you poked me." << endl;
  }


} // end namespace mu2e

DEFINE_ART_SERVICE(mu2e::FooService);
