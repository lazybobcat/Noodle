////////////////////////////////////////////////////////////
//
// Noodle - C++ game framework
// Copyright (C) 2014 Loïc Boutter (contact@loicboutter.fr)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////


#ifndef ENTITYMANAGER_HPP
#define ENTITYMANAGER_HPP

#include <noodle_global.h>
#include <entities/entity.hpp>
#include <string>
#include <map>

namespace ndl
{

namespace es
{


class NOODLESHARED_EXPORT EntityManager
{
public:
    typedef std::map<std::string,Entity> AliasMap;

public:
    EntityManager();

    Entity          createEntity();
    Entity          createEntity(const std::string& alias);
    Entity          getByAlias(const std::string& alias);
    void            registerAlias(Entity e, const std::string& alias);


private:
    Entity          mNextEntity;
    AliasMap        mEntityAliases;

};


}

}

#endif // ENTITYMANAGER_HPP
