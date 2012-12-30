<?php
useattrib("atkdateattribute");  // declare as good-practice

class issue extends atkNode
{
    public function __construct()
    {
        parent::__construct("issue");

        $this->add(new atkAttribute("id", AF_AUTOKEY));
        $this->add(new atkAttribute("description", AF_OBLIGATORY));
        $this->add(new atkDateAttribute("publication_date"));

        $this->setTable("issue");
        $this->setOrder("publication_date DESC");

        // add relationship to article node
        $this->add(new atkOneToManyRelation("articles",
                                            "magman.article",
                                            "issue_id",
                                            AF_HIDE_LIST));
    }
}
