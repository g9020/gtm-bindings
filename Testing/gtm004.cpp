/*=========================================================================
 *
 *  Copyright OSEHRA
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "GTM.h"

#include <cstdlib>
#include <iostream>

//
//  Test the Set and Get methods
//

int main( int argc, char * argv [] )
{
  GTM gtm;

  std::string globalName = "^Capital";
  std::string setValue = "London";

  try
    {

    gtm.Set( globalName, setValue );

    std::string getValue;

    gtm.Get( globalName, getValue );

    std::cout << globalName << " = " << getValue << std::endl;

    gtm.Kill( globalName );

    }
  catch( std::runtime_error & excp )
    {
    std::cerr << excp.what() << std::endl;
    }

  return EXIT_SUCCESS;
}
