#include "context/user.h"
#include "utils/tarslog.h"

namespace majong
{
    namespace context
    {
        User::User()
            : _uid(nil_uid)
            , _cid(nil_cid)
            , _nick("")
            , _url("")
            , _netbroken(false)
            , _left(false)
            , _gender(0)
            , _wealth(0)
            , _winwealth(0)
        {
            roundInit();
        }

        User::User(guid_t uid, cid_t cid, bool robot)
            : _uid(uid)
            , _cid(cid)
            , _robot(robot)
            , _nick("")
            , _url("")
            , _netbroken(false)
            , _left(false)
            , _gender(0)
            , _wealth(0)
            , _winwealth(0)
        {
            roundInit();
        }


        void User::roundInit()
        {
            this->_cards.clear();
            this->_specards.clear();
            this->_done             = false;
            this->_midsit           = false;
            this->_fold             = false;
            this->_allin            = false;
            this->_act              = nil_act;
            this->_option           = nil_act;
            this->_changenum        = 0;
            this->_round_betnum_list.clear();
            this->_robotUserParam.clear();
            this->_timeout = 0;
            this->_tuoguan = false;

            {
                _cards.clear();
                _hua_cards.clear();
                _doorcards.clear();
                _opset.clear();
                _chi_options.clear();
                _apcards.clear(); 
                _vechutype.clear(); 
                _huaction = algorithm::HuAction::Invalid;
                _baoting = false;
                _is_tianting = false;
                _is_ready = false;
                _fan = 0;
                _draw_count = 0;
                _winwealth = 0;
            }
        }

        User::~User()
        {
        }
    };
};
