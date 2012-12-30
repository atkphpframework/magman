<?php

class mod_magman extends atkModule
{
    public function getMenuItems()
    {
        $this->menuitem("issues", dispatch_url("magman.issue",
                                               "admin"));
    }
}
