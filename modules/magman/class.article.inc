<?php

class article extends atkNode
{
    public function __construct()
    {
        parent::__construct("article");

        $this->add(new atkAttribute("id", AF_AUTOKEY));
        $this->add(new atkAttribute("title", AF_OBLIGATORY));
        $this->add(new atkAttribute("author", AF_OBLIGATORY));

        $this->setTable("article");

        // add relationship to issue node
        $this->add(new atkManyToOneRelation("issue_id",
                                            "magman.issue"));
    }
}
