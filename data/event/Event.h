#pragma once

class Event {

    public:

        bool isCanceled();
        void setCanceled(bool canceled);

    private:

        bool canceled;

};