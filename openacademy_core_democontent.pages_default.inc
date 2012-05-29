<?php
/**
 * @file
 * openacademy_core_democontent.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openacademy_core_democontent_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openacademy_about';
  $page->task = 'page';
  $page->admin_title = 'About Page';
  $page->admin_description = 'This is the about page of the site used to show off information about this site';
  $page->path = 'about';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'menu-header-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openacademy_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openacademy_about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'about-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Bell pepper sierra leone bologi -',
      'body' => 'Urad bean, broccoli rabe bell pepper polk napa cabbage wild leek sea beet. Celeriac catsear fluted pumpkin garlic golden samphire, tomatillo zucchini, sea beet ahipa winged bean. Fiddlehead chickpea ginger. Swiss chard earthnut pea florence fennel chaya - kurrat lima bean sweet potato or kumara.

Bell pepper sierra leone bologi - squash watercress gumbo. Plectranthus tomatillo cauliflower, cardoon lentil kurrat bell pepper prairie turnip cassava pigeon pea, elephant foot yam water spinach. Polk leek dolichos bean, paracress sea kale, tinda; lamb\'s lettuce, manioc salsify; sorrel. Fat hen - cauliflower camas greater plantain sierra leone bologi chinese artichoke turnip greens golden samphire pignut peanut epazote greater plantain.
',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['bottom'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Elephant Foot yam moth',
      'body' => 'Napa cabbage chinese artichoke land cress shallot kohlrabi chard tomatillo celtuce. Paracress garden rocket indian pea celery, epazote, earthnut pea ahipa. Mooli pignut kohlrabi kale yarrow winter purslane sweet pepper land cress. Green bean bamboo shoot kohlrabi sierra leone bologi lotus root beet greens.

Ahipa chickpea catsear - fat hen sweet corn aka corn; aka maize, radicchio nopal - swede - bitter melon. Radicchio, spinach fiddlehead. Beet greens, winged bean canna elephant foot yam bitter melon jícama courgette? Bamboo shoot, green bean melokhia scallion napa cabbage new zealand spinach hamburg parsley, earthnut pea burdock. Potato, scallion fluted pumpkin - prussian asparagus earthnut pea pak choy west indian gherkin - tigernut? Manioc sweet pepper - ceylon spinach, courgette pea, spring onion pumpkin, jerusalem artichoke common bean manioc.

Yacón sierra leone bologi horse gram. Wild leek tinda orache chickweed garden rocket. Scallion dandelion yarrow, nopal. Catsear swede, kurrat velvet bean?

Land cress watercress camas. Rutabaga west indian gherkin shallot? Greater Plantain mizuna greens tomatillo okra aubergine. Bitterleaf eggplant elephant garlic gobo yardlong bean.

Elephant Foot yam moth bean okra pak choy manioc pak choy garden rocket, sea beet winter melon radish asparagus. Chinese Mallow velvet bean - lima bean kale. Ulluco winter melon shallot indian pea; guar bamboo shoot american groundnut shallot scallion - sierra leone bologi. Guar rutabaga; guar lentil yardlong bean.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Jícama peanut sweet corn',
      'body' => 'Daikon bamboo shoot chinese mallow pea sprouts spinach runner bean arracacha new zealand spinach. Brussels sprout potato greater plantain, guar. Horse gram pak choy prussian asparagus broadleaf arrowhead spring onion polk sweet potato or kumara.

Plectranthus tinda tomatillo potato; mooli horseradish. Celtuce pea sprouts fluted pumpkin tatsoi spinach; jícama okra velvet bean. Chard, urad bean yardlong bean scorzonera, winged bean. Mung bean fava bean, pumpkin tarwi. Hamburg parsley fat hen, ceylon spinach earthnut pea tomato, indian pea welsh onion yarrow, broadleaf arrowhead avocado chickweed, broadleaf arrowhead.

Jícama peanut sweet corn aka corn; aka maize common bean mustard, prussian asparagus chinese cabbage canna sorrel, avocado winter purslane. Ulluco beet greens lettuce bitter melon, bitterleaf taro celtuce.
',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['right'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openacademy_about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openacademy_contact';
  $page->task = 'page';
  $page->admin_title = 'Contact Page';
  $page->admin_description = 'This is the contact page of the site used to tell people about the department!';
  $page->path = 'contact';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact',
    'name' => 'menu-header-menu',
    'weight' => '-5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '-14',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openacademy_contact_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openacademy_contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'contact-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Bell pepper sierra leone bologi -',
      'body' => 'Urad bean, broccoli rabe bell pepper polk napa cabbage wild leek sea beet. Celeriac catsear fluted pumpkin garlic golden samphire, tomatillo zucchini, sea beet ahipa winged bean. Fiddlehead chickpea ginger. Swiss chard earthnut pea florence fennel chaya - kurrat lima bean sweet potato or kumara.

Bell pepper sierra leone bologi - squash watercress gumbo. Plectranthus tomatillo cauliflower, cardoon lentil kurrat bell pepper prairie turnip cassava pigeon pea, elephant foot yam water spinach. Polk leek dolichos bean, paracress sea kale, tinda; lamb\'s lettuce, manioc salsify; sorrel. Fat hen - cauliflower camas greater plantain sierra leone bologi chinese artichoke turnip greens golden samphire pignut peanut epazote greater plantain.
',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['bottom'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Elephant Foot yam moth',
      'body' => 'Napa cabbage chinese artichoke land cress shallot kohlrabi chard tomatillo celtuce. Paracress garden rocket indian pea celery, epazote, earthnut pea ahipa. Mooli pignut kohlrabi kale yarrow winter purslane sweet pepper land cress. Green bean bamboo shoot kohlrabi sierra leone bologi lotus root beet greens.

Ahipa chickpea catsear - fat hen sweet corn aka corn; aka maize, radicchio nopal - swede - bitter melon. Radicchio, spinach fiddlehead. Beet greens, winged bean canna elephant foot yam bitter melon jícama courgette? Bamboo shoot, green bean melokhia scallion napa cabbage new zealand spinach hamburg parsley, earthnut pea burdock. Potato, scallion fluted pumpkin - prussian asparagus earthnut pea pak choy west indian gherkin - tigernut? Manioc sweet pepper - ceylon spinach, courgette pea, spring onion pumpkin, jerusalem artichoke common bean manioc.

Yacón sierra leone bologi horse gram. Wild leek tinda orache chickweed garden rocket. Scallion dandelion yarrow, nopal. Catsear swede, kurrat velvet bean?

Land cress watercress camas. Rutabaga west indian gherkin shallot? Greater Plantain mizuna greens tomatillo okra aubergine. Bitterleaf eggplant elephant garlic gobo yardlong bean.

Elephant Foot yam moth bean okra pak choy manioc pak choy garden rocket, sea beet winter melon radish asparagus. Chinese Mallow velvet bean - lima bean kale. Ulluco winter melon shallot indian pea; guar bamboo shoot american groundnut shallot scallion - sierra leone bologi. Guar rutabaga; guar lentil yardlong bean.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Jícama peanut sweet corn',
      'body' => 'Daikon bamboo shoot chinese mallow pea sprouts spinach runner bean arracacha new zealand spinach. Brussels sprout potato greater plantain, guar. Horse gram pak choy prussian asparagus broadleaf arrowhead spring onion polk sweet potato or kumara.

Plectranthus tinda tomatillo potato; mooli horseradish. Celtuce pea sprouts fluted pumpkin tatsoi spinach; jícama okra velvet bean. Chard, urad bean yardlong bean scorzonera, winged bean. Mung bean fava bean, pumpkin tarwi. Hamburg parsley fat hen, ceylon spinach earthnut pea tomato, indian pea welsh onion yarrow, broadleaf arrowhead avocado chickweed, broadleaf arrowhead.

Jícama peanut sweet corn aka corn; aka maize common bean mustard, prussian asparagus chinese cabbage canna sorrel, avocado winter purslane. Ulluco beet greens lettuce bitter melon, bitterleaf taro celtuce.
',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openacademy_contact'] = $page;

  return $pages;

}
