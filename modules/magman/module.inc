<?php

class mod_magman extends atkModule
{
    public function getMenuItems()
    {
      $this->menuitem("issues", dispatch_url("magman.issue", "admin"));
      $this->menuitem("articles", dispatch_url("magman.article", "admin"));
      $this->menuitem("categories", dispatch_url("magman.category", "admin"));
    }
}
