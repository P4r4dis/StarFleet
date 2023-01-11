#ifndef         __BORGQUEEN__
# define        __BORGQUEEN__

#include "Borg.hpp"

namespace   Borg
{
    class   Ship;
}

namespace   Borg
{
    class   BorgQueen
    {
        private:
        public:
            BorgQueen(void);
            ~BorgQueen(void);

            bool                (Borg::Ship::*movePtr) (Destination destination);
            bool                move(Borg::Ship *ship, Destination dest);
    };
}
#endif //       !__BORGQUEEN__