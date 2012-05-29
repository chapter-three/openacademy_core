<?php
/**
 * @file
 * openacademy_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openacademy_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openacademy_front';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'This is the front page of the site used to kick things off on a good foot!';
  $page->path = 'front';
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
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openacademy_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openacademy_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'front-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'brown';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-news_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '2',
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'body' => 1,
        'field_tags' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => 'Recent News',
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
    $display->panels['column1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_events-upcoming_events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'fields_override' => array(
        'field_featured_image' => 1,
        'field_event_date' => 1,
        'field_event_date_2' => 0,
        'title' => 1,
        'field_event_date_1' => 1,
        'body' => 0,
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => 'Upcoming Events',
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
    $display->panels['column2'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'column3';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_publications-publication_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '2',
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'view_mode' => NULL,
      'widget_title' => 'Recent Publications',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['column3'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'slider';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:3cf85237-de5c-35b4-095e-64447e9ff6bf';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['slider'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'slidergutter';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:e663c0b4-8de1-1e54-2133-3de6a740bb8c';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['slidergutter'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openacademy_front'] = $page;

  return $pages;

}
